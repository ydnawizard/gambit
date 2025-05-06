
//Define file contents structure for organized storage
typedef struct text_file_contents{
	int character_count;
	int string_count;
	int line_count;
	char* characters;
	char** strings;
	char** lines;
}txt;

//Single-character handling
void read_character_to_text_file_contents(
		txt* text_file_contents,
		char character,
		int character_index
		)
{
	if(character_index == 0)
	{
		if(character != '\n' && character != ' ')
		{
			text_file_contents->characters
				=malloc(sizeof(char));
			text_file_contents->characters
				[character_index]=character;
			text_file_contents->character_count=1;
		}
	}
	else
	{
		if(character != '\n' && character != ' ')
		{
			text_file_contents->characters
				=realloc(text_file_contents->characters,
						(character_index+1)*sizeof(char));
			text_file_contents->characters
				[character_index]=character;
			text_file_contents->character_count+=1;
		}
		else
		{
			text_file_contents->characters
				=realloc(text_file_contents->characters,
						(character_index+1)*sizeof(char));
			text_file_contents->characters
				[character_index]='\0';
			text_file_contents->character_count+=1;
		}

	}
}

//main function
void read_text_file_contents(txt* file_contents_pointer,char* file_path)
{
	char character;
	int character_index=0;
	FILE* file_pointer = fopen(file_path,"read");
	while((character = fgetc(file_pointer))!=EOF)
	{
		read_character_to_text_file_contents(
				&(*file_contents_pointer),
				character,
				character_index
				);
		character_index+=1;
	}
}


